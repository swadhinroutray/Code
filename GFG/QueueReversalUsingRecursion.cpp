queue<long long int> rev(queue<long long int> q)
{

    if (q.empty() == true)
        return q;

    int x = q.front();
    q.pop();
    q = rev(q);
    q.push(x);
    return q;
}