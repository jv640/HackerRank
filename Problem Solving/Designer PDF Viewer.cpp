int designerPdfViewer(vector<int> h, string word) {
    int n = word.length();
    int res = 1;
    for(int i=0;i<n;i++)
    {
        res = max(res,h[word[i]-97]);
    }
    return res*n;
}
