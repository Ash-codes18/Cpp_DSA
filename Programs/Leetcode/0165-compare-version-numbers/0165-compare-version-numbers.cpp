class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n = version1.length();
        int m = version2.length();

        vector<int> revision1;
        vector<int> revision2;
        string temp;

        for(int i=0;i<n;i++){

            if(version1[i]=='.'){
                revision1.push_back(stoi(temp));
                temp="";
            }

          else{
            temp.push_back(version1[i]);
            }

        }
            revision1.push_back(stoi(temp));
            temp="";

        
   
        for(int i=0;i<m;i++){

            if(version2[i]=='.'){
                revision2.push_back(stoi(temp));
                temp="";
            }

          else{
            temp.push_back(version2[i]);
            }

        }
            revision2.push_back(stoi(temp));     


        int a = revision1.size();
        int b = revision2.size();
        int z = (a<b)?a:b;


        int ans=0;
        bool flag = false;

        for(int i=0;i<z;i++){
            if(revision1[i]>revision2[i]){
                ans=1;
                flag =true;
                break;
            }
            else if(revision1[i]<revision2[i]){
                ans=-1;
                flag =true;
                break;
            }

        }


        if(a>b && !flag){
            for(int i =b;i<a;i++){
                if(revision1[i]>0){
                    ans=1;
                }
            }
        }

        else if(b>a && !flag){
            for(int i =a;i<b;i++){
                if(revision2[i]>0){
                    ans=-1;
                }
            }
        }



    return ans;


    }
};