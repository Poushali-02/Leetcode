class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        if not head:
            return head
        new = {}
        curr = head
        while curr:
            copy = Node(curr.val)
            new[curr] = copy
            curr = curr.next
        curr = head
        while curr:
            copy = new[curr]
            copy.next = new.get(curr.next)
            copy.random = new.get(curr.random)
            curr = curr.next
        return new[head]
