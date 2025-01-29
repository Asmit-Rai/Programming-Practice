#include<iostream>
using namespace std;

 void isPalindrome(string s) {
        string reverse =""; 
        string normal= "";
        string ans ="";
      
        for(int i=0; i<s.length(); i++)
        {
            ans.push_back(tolower(s[i]));
        }
        for(int i =ans.length(); i>=0; i--)
        {
            if((ans[i]>='a' && ans[i]<='z') ||(ans[i]>='0' && ans[i]<='9') )
            {
                reverse.push_back(ans[i]);
            }
        }
          for(int i =0; i<ans.length(); i++)
        {
            if((ans[i]>='a' && ans[i]<='z') ||(ans[i]>='0' && ans[i]<='9'))
            {
                normal.push_back(ans[i]);
            }
        }
        cout<<ans<<endl;
        cout<<reverse<<endl;
        cout<<normal<<endl;
      
       
        
        
        // if(ans ==reverse_string)
        // {
        //     return ans;
        // }
        // else
        // {
        //     return reverse_string;
        // }
        
    }
int main()
{
    isPalindrome("0P");
    return 0;
}