# CS121-Horse-Race

##function prototype
void advance(int horseNum, int* horses);
void printLane(int horse num, int* horses);
bool isWinner(int horse num, int* horses);


constant int NUM_HORSES
constant int TRACK_LENGTH
## main()

```
    set up randomization 
    set up horses array
    5 zeros 
    

    set keepGoing to true 
    while loop to manage entire game 
    while keepGoing:
        go through all the horses (for loop)
        for each horse:
        advance that horse 
        print a lane for that horse 
        if that horse wins:
            set keepGoing to false (get out of game)
        prompt for next turn 


```

## advance()
```

given horseNum and horse array 
roll a zero or a one-- coin
add coin to that horse's position value

```
# print()
```
given horseNum and horse array 
for loop from 0 to TRACK_LENGTH -- i 
    if i == current horse position:
        print horseNum
    otherwise:
        print a dot
```

##isWinner()
```
given horseNum and horse array
result = false
if this horses position += TRACK_LENGTH 
    result = true
    print horseNum is the winner 
return result

```

