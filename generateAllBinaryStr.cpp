class Solution{
    public:
        void gen(int num, string s , int index){
            if(index == num){
                cout<<s<<" ";
                return;
            }
            if(index!=0 && s[index-1]=='1'){
                gen(num, s+'0',index+1);
            }
            else{
                gen(num, s+'0',index+1);
                gen(num, s+'1', index+1);
            }
        }
    
        void generateBinaryStrings(int num){
            //Write your code
            gen(num,"",0);
        }
    };