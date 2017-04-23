
def subsets(nums):

    nums.sort()
    total=2**len(nums)
    res=[]*total

    for i in range(total):
        res.append([])

    for i in range(len(nums)):
        for j in range(total):
            if ((j>>i)&1) >0:
                res[j].append(nums[i])
    return res

print subsets([2,1,3])
