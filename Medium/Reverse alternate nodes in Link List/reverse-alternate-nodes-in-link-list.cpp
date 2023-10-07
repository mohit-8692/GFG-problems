//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };
*/
    #include<vector>
class Solution
{
    public:
     
    void rearrange(struct Node *head)
{
    vector<int>ansEven;
    vector<int>ansOdd;

    Node *N1 = head;
    bool flag = false;

    while (N1 != NULL)
    {
        if (flag)
        {
           ansEven.push_back(N1 ->data);
        }
        else
            ansOdd.push_back(N1 ->data);
        flag = !flag;
        N1 = N1->next;
    }
    N1 = head;
    
    for(int i = 0; i<ansOdd.size(); i++)
    {
        N1 ->data = ansOdd[i];
        N1 = N1 ->next;
    }
    
    // N1 = N1 ->next;
    for(int i = ansEven.size()-1; i>=0; i--)
    {
        N1 ->data = ansEven[i];
        N1 = N1 ->next;
    }
   
}
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends