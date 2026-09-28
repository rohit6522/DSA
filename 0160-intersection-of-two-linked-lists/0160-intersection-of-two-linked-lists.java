/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */

 
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        ListNode curr = headA;

        while(curr != null){
            curr.val *= -1;
            curr = curr.next;
        }

        ListNode intersection = null;
        curr = headB;

        while(curr != null){
            if(curr.val < 0){
                intersection = curr;
                break;
            }
            curr = curr.next;
        }

        curr = headA;

        while(curr != null){
            curr.val *= -1;
            curr = curr.next;
        }

        return intersection;
    }
}