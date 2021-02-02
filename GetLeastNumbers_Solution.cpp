    void PrintOutPut(vector<int> output)
    {
        int i;
        for(i=0;i<output.size();++i)
            cout << output[i] << " ";
        cout <<endl;
    }
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> output;
        int i,j;
        for(i=0;i<input.size();)
        {
            if(output.size()<k)
            {
                output.push_back(input[i]);
                for(j=output.size()-1;j;j--)
                {
                    if(output[j-1] > output[j])
                    {
                       int temp=output[j];
                       output[j]=output[j-1];
                       output[j-1]=temp;
                    }
                }
                ++i;
            }else if(input[i] < output[k-1])
            {
                output.pop_back();
            }else
            {
                ++i;
            }
        }
        return output;
    }
