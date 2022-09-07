#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class StrCal{
    public :
        int calculate(string str1){
            int n = str1.size(),sum =0,i=0;
            if(str1.empty())   cout<<"0"<<endl;
            vector<string> res;

            while(i<n){
                string str2 = "";
                while(i<n && str1[i] != ','){
                    str2 += str1[i];
                    i++;
                }

            try {
                 if (str2[0] == '-') throw str2;
            	if(isalpha(str2[0]))   sum += str2[0] -'a'+1; //Checks for alphabet
               
                else{
                    if(stoi(str2)>1000) sum+= 0; //String to integer conversion
                    else sum += stoi(str2);
                }
            }
            catch (string str3) { res.push_back(str3);}
            i++;
        }
        if(res.size() == 0) return sum;

        cout<<"Negative number entered : ";
        for(auto x: res)   cout<<x<<" ";
        cout<<endl;

        return -1;
    }
};
int main(){
	 while(true){
        string str="";
        cout<<"Enter string: ";
        getline(cin,str);
       
        StrCal obj;
        if(obj.calculate(str) >= 0) cout<<"Result of string : "<<obj.calculate(str)<<endl;
    }
    return 0;
}
