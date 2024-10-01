string removeConsecutiveCharacter(string S)
    {
        if (S.empty())
        {
            return S;
        }
    
        queue<char> q;
        q.push(S[0]);

        for (int i = 1; i < S.length(); ++i) 
        {
            if (S[i] != S[i-1]) 
            {
                q.push(S[i]);
            }
        }

        string result = "";
        while (!q.empty()) 
        {
            result += q.front();
            q.pop();
        }

        return result;
    }
