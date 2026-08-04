/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
        ListNode dummy = new ListNode(0);  
        ListNode current = dummy;        
        int carry = 0;

        while (l1 != null || l2 != null || carry != 0) {
            int x = (l1 != null) ? l1.val : 0;   
            int y = (l2 != null) ? l2.val : 0;
            int sum = x + y + carry;

            carry = sum / 10;                      // tens digit → carried forward
            current.next = new ListNode(sum % 10); // ones digit → new node
            current = current.next;                // step forward in the answer

            if (l1 != null) l1 = l1.next;          // step forward in the inputs
            if (l2 != null) l2 = l2.next;
        }
        return dummy.next;   // real answer starts after the fake node
    }
}