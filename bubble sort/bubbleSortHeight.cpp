void bubbleSort(vector<int>& heights) {
    int n = heights.size(); int i; int j;
        
    //the heart of bubble sort
        for (i = 0; i < n - 1; ++i){
            for (j = 0; j < n - i - 1; ++j){
                if (heights[j] > heights[j + 1]){
                    swap(heights[j], heights[j + 1]);
                }
            }
        }
    }
