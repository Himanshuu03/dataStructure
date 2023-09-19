vector<int>temp;
            int i;
            int j;
            int k;
            i=j=k=0;
            while(i<n1 && j<n2 && k<n3){
                if(A[i] == B[j] == C[k]){
                    temp.push_back(A[i]);
                    i++;
                    j++;
                    k++;
                }
                else if(A[i] < B[j]){
                    i++;
                }
                else if(B[j] < C[k]){
                    j++;
                }
                else{
                    k++;
                }
            }
            vector<int>arr;
            for(int i =0;i<temp.size()-1;i++){
                if(temp[i] != temp[i+1]){
                    arr.push_back(temp[i]);
                }
            }
            arr.push_back(temp[temp.size()-1]);
            return arr;
