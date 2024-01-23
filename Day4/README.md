## Day 4

## Thread Synchronization

- When multiple threads within the process attempts to modify/access a shared resource then we need to use some kind of locks to synchronize the access
- i.e only thread in the same process should be able to access/modify a shared resource
- if multiple threads are allowed to modify the shared resource then, the shared resource might get corrupted or it might lead to unexpected results

Assume your saving account currently has Rs.50,000/-

Assume User 1, User 2 and User 3 are attempting to access/modify the account balance

User 1 is trying to deposit Rs.10,000 into the account
User 2 is trying to withdraw Rs.5,000 from the account
User 3 is swiping the Debit card for Rs.2000 for shopping 

If all the above are allowed at the same time, can you guess the final updated balance in the accounted?


These are some of the thread synchronization locks available

1. When multiple threads within the same process are attempting to access/modify a single resource, then we could use Mutex which is mutually exclussive lock.
Examples
- If you office has only one network printer for all employees

3. When multiple threads within the same process are attempting to access/modify a limited number of resource, then we could use Semaphore.
Example
- Your office with multiple network printers
- Your office building with multiple lifts

## Assignment 

Assume you have 3 Gardeners (Each Garderner you could assume as a Thread )
<pre>
Gardener 1 - Specialized in Digging a Pit
Gardener 2 - Specialized in Planting a sapling(plant)
Gardener 3 - Specialized in filling the pit with sappling and watering the plant
</pre>

Given some 50 saplings(plants), they are supposed plant 50 saplings in a synchronized fashion.

What challenges you see?
<pre>
What is the relationship/dependency between Gardener 1 and Gardener 2?
What is the relationship/dependency between Gardener 2 and Gardener 3?
What is the relationship/dependency between Gardener 3 and Gardener 1?
Which type of synchronization you will be using in this scenario?
</pre>

Hint
<pre>
You could use QWaitCondition and QMutex  
</pre>


