queue<ll> modifyQueue(queue<ll> q, int k)
{

    stack<ll> temp;
    for (int i = 0; i < k; i++)
    {
        temp.push(q.front());
        q.pop();
    }
    while (!temp.empty())
    {
        q.push(temp.top());
        temp.pop();
    }

    for (int i = 0; i < q.size() - k; i++)
    {
        q.push(q.front());
        q.pop();
    }
    return q;
}