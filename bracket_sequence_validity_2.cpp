


bool valid(string s)
{
    int n=s.size();
    if(n==0) return true;


    stack<char> st;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='(' or s[i]=='{' or s[i]=='[') st.push(s[i]);
        else
        {

            if(!st.empty() and ( (s[i]==')' and st.top()=='(')  or (s[i]=='}' and st.top()=='{')  or (s[i]==']' and st.top()=='[') ) )
            {
              st.pop();
            }
            else return false;
        }
    }

   if(st.size()) return false;
   else return true;
}

