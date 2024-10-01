class Solution{
public:
	string removeDuplicates(string str) 
	{
	    int size=str.length();
	    string st="";
	    for (int i = 0; i < size; i++)
	    {
            bool found = false;  
            for (int j = 0; j < st.size(); j++) 
            {
                if (str[i] == st[j]) 
                {
                    found = true;
                    break;  
                }
            }
            if (!found) 
            {  
                st += str[i];
            }
        }
  return st;
	}
};
