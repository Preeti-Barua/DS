public class BST{
    Node root;

    class Node{
        int value;
        Node left;
        Node right;

        Node(int value){
            this.value = value;
            System.out.println(value + " inserted");
        }
    }

//          |/|10|\|  
//  |X|5|X|          |X|12|\| 
//                          |X|20|X|



    public void insert(int value){
        // IDK Print here if needed
        if(root == null){
            Node n = new Node(value);
            root = n;
        }
        else{
            Node tmp = root;
            while(true){
                if(value >= tmp.value){
                    if(tmp.right == null){
                        tmp.right = new Node(value);
                        break;
                    }
                    else tmp = tmp.right;
                }
                else{
                    if(tmp.left == null){
                        tmp.left = new Node(value);
                        break;
                    }
                    else tmp = tmp.left;
                }
            }
        }
    }
}