struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* curr = head;
    curr->next = NULL;

    int carry = 0;
    int num = 0;

    // 1️⃣ Add corresponding nodes
    while (l1 != NULL && l2 != NULL) {

        num = l1->val + l2->val + carry;

        if (num > 9) {
            carry = 1;
            num -= 10;
        } else {
            carry = 0;
        }

        curr->val = num;

        l1 = l1->next;
        l2 = l2->next;

        if (l1 != NULL && l2 != NULL) {
            curr->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            curr = curr->next;
            curr->next = NULL;
        }
    }

    // 2️⃣ Remaining list
    struct ListNode* rest = (l1 != NULL) ? l1 : l2;

    while (rest != NULL) {

        num = rest->val + carry;

        if (num > 9) {
            carry = 1;
            num -= 10;
        } else {
            carry = 0;
        }

        curr->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        curr = curr->next;
        curr->val = num;
        curr->next = NULL;

        rest = rest->next;
    }

    // 3️⃣ Final carry
    if (carry) {
        curr->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        curr = curr->next;
        curr->val = carry;
        curr->next = NULL;
    }

    return head;
}

