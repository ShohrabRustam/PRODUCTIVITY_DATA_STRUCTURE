The relation between the number of internal and external nodes in a binary tree is given by the following formula:

The number of internal nodes (I) is equal to the number of external nodes (E) minus one:

                        I = E - 1

                        E = (M-1) * I + 1
where M is the number of children of each internal node. In a binary tree, M is always 2 (since each internal node can have at most two children).
This means that the number of external nodes (E) can be calculated as:

                        E = (2-1) * I + 1
                        E = I + 1
This relationship can be understood intuitively: every internal node in a binary tree contributes to the creation of two external nodes (its children), and the last external node is the root of the tree. Therefore, if you have I internal nodes, you will have I + 1 external nodes.
In summary, the relationship between internal and external nodes in a binary tree can be expressed as:

This means that in a binary tree, the number of internal nodes is always one less than the number of external nodes. This relationship holds true for all binary trees, regardless of their structure or size.