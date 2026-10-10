
public class Solution {
    public ListNode detectCycle(ListNode head) {
        ListNode slowPtr = head;
        ListNode fastPtr = head;

        while(slowPtr != null && fastPtr != null && fastPtr.next != null){
            slowPtr = slowPtr.next;
            fastPtr = fastPtr.next.next;

            if(slowPtr == fastPtr){
                while(head != slowPtr){
                    head = head.next;
                    slowPtr = slowPtr.next;
                }
                return slowPtr;
            }

        }

        return null;
    }
}