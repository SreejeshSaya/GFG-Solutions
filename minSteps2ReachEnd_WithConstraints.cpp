int getMinStepToReachEnd(int arr[], int N) {
    bool visit[N];
    int distance[N];
    vector<int> digit[100];
    memset(visit, false, sizeof(visit));
    // cout << "endHere\n";
    for (int i = 1; i < N; i++)
        digit[arr[i]].push_back(i);
    distance[0] = 0;
    visit[0] = true;
    queue<int> q;
    q.push(0);
    while(!q.empty()) {
        int idx = q.front();     q.pop();
        if (idx == N-1) break;

        int d = arr[idx];

        for (int i = 0; i<digit[d].size(); i++) {
            int nextidx = digit[d][i];
            if (!visit[nextidx]) {
                visit[nextidx] = true;
                q.push(nextidx);
                distance[nextidx] = distance[idx] + 1;
            }
        }
        if (idx-1 >= 0 && !visit[idx - 1]) {
            visit[idx - 1] = true;
            q.push(idx - 1);
            distance[idx - 1] = distance[idx] + 1;
        }

        if (idx + 1 < N && !visit[idx + 1]) {
            visit[idx + 1] = true;
            q.push(idx + 1);
            distance[idx + 1] = distance[idx] + 1;
        }
    }


    for(int i: distance) cout << i << " ";
        // cout << endl;
    // N-1th position has the final result
    cout << "BFS: " << distance[N-1] << endl;
    return distance[N - 1];
}