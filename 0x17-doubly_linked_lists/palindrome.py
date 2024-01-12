   #!/usr/bin/env python
    # Find the largest palindrome made from the product of two 3-digit numbers.

    # Reverse algorithm
    def flipNumber( number ):
        nmbList     = list(str(number))

        i           = len( nmbList )
        reverseList = list()

        # reverse the list
        for x in nmbList:
            reverseList.append( nmbList[i-1] )
            i -= 1

        # join list items to one number & cast it to integer
        return int(''.join(reverseList))


    # Figure out if numbers are palindrome
    def isPalindrome( number ):
        return number == flipNumber( number )

    def multiplyRun(  ):
        for i in range( 100, 999 ):
            for y in range( 100, 999 ):
                if isPalindrome( i * y ):
                    maxPalind = i * y

        return maxPalind

    # simple tests
    # print( flipNumber( 90819 ) )
    # print( isPalindrum( 9009, 9009 ) )
    # print( isPalindrum( 9109, 9009 ) )
    # print( isPalindrum( 9009, 9019 ) )
    # print( isPalindrum( 9019, 9019 ) )
    # print( isPalindrum( 9119, 9119 ) )
