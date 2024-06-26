//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




// } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* insertionSort(struct Node* head)
    {
        
        Node *prev = head;
        Node *temp = head->next;
        Node *next;
        while(temp){
            Node *first = head;
            next = temp->next;
            if(first->data>temp->data){
                prev->next=temp->next;
                temp->next = head;
                head=temp;
                temp=next;
                continue;
            }
            else{
                while( first->next!=temp && first->next->data<temp->data){
                    first=first->next;
                }
                if(first->next->data>=temp->data && first->next!=temp){
                    prev->next = temp->next;
                    temp->next = first->next;
                    first->next = temp;
                }
                else{
                    prev=prev->next;
                }
            }
            temp=next;
        }
        return head;
    }
    
};

//{ Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}
// } Driver Code Ends