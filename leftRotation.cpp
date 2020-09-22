import java.util.*;

public class HelloWorld{ 
    public static int Count(String s){
       int count=0;
       ArrayList<String>ss=new ArrayList<String>();
       int size=s.length();
       char c=' ';
       while(ss.size()<size){
          String s1=s;
          for(int j=0;j<size-1;j++){
             s1 = s1.substring(0, j) 
              + s.charAt(j+1) 
              + s1.substring(j + 1); 
          } 
          s1 = s1.substring(0, size-1) 
              + s.charAt(0);
          ss.add(s1);
          s=s1;
       }
       
       for(int i=0;i<size;i++){
           if(ss.get(i).charAt(0)==ss.get(i).charAt(size-1)) count++;
       }
      
       return count;
    }
    public static void main(String []args){
        String s="abca";
        int count=Count(s);
        System.out.println(count);
     }
}