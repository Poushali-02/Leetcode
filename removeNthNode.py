class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        dummy = ans= ListNode(0, head)
        for _ in range(n):
            head = head.next
        while head:
            dummy = dummy.next
            head = head.next
        dummy.next = dummy.next.next
        return ans.next
