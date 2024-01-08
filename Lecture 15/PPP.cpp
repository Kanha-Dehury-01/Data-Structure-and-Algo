bool isSolution(vector<int> &stalls, int k, int mid)
{
    int currCow = 1;
    int lastPos = stalls[0];

    for (int i = 0; i < stalls.size(); i++)
    {
        if ((stalls[i] - lastPos) >= mid)
        {
            currCow++;
            if (currCow == k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{

    sort(stalls.begin(), stalls.end());
    int start = 0;
    int end = stalls[stalls.size() - 1];
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isSolution(stalls, k, mid))
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return mid;
}