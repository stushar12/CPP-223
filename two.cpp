void solve(Node* root, int len, int sum, int &maxlen, int &maxsum)
{
if(root==NULL)
{
if(len>maxlen)
{
maxlen=len;
maxsum=sum;
}

else if(len==maxlen)
{
if(sum>maxsum)
maxsum=sum;
}

return;
}

solve(root->left, len+1, sum+root->data, maxlen, maxsum);
solve(root->right, len+1, sum+root->data, maxlen, maxsum);
}

int sumOfLongRootToLeafPath(Node* root)
{
if(!root)
return 0;

int maxlen=0;
int maxsum=INT_MIN;
int len=0;
 int sum=0;
solve(root,len,sum,maxlen,maxsum);

return maxsum;
}
