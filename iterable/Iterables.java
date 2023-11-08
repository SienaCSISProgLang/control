/*
  Example to demonstrate use of Iterables and "for each"
  loops in Java 5 and up.

  Jim Teresco, Mount Holyoke College, CS 211, Fall 2009
  The College of Saint Rose, CSC 433, Fall 2012
  Siena College, CSIS 340, Fall 2019

*/
import java.util.ArrayList;
import java.util.Iterator;

public class Iterables {

    public static void main(String args[]) {
	ArrayList<Integer> v = new ArrayList<Integer>();

	for (int i=0; i<10; i++) {
	    v.add(i*i);
	}

	/* "traditional" Iterator-based loop, only requires that
	    the iterator method is implemented */
	System.out.println("Traditional iterator:");
	Iterator<Integer> iter = v.iterator();
	while (iter.hasNext()) {
	    System.out.println(iter.next());
	}

	/* for each loop -- works if v implements Iterable */
	System.out.println("Using foreach-style loop:");
	for (int i : v) {
	    System.out.println(i);
	}
    }
}
