def Subset n
     
    arr = [0]*n     

    begin

      arr[n-1] += 1
  
      for i in (n-1).downto(1)

          if arr[i] > 1 then

              arr[ i ] -= 2

              arr[i - 1] += 1  
          end 

      end    

      for i in 0..n-1

          if arr[i] != 0 then

             print (i+1)

          end  
      end 

      s = 0

      for i in 0..n-1

          if arr[i] then

            s += arr[i] 

          end   
      end 

      print "\n"

      end while s < n
         
end

Subset 5
