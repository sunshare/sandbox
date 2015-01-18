# 基础算法整理-排序篇

## 桶排序
对数组 `int a[] = {3, 5, 2, 1, 7};` 从小到大排序。

简单说下这个排序过程：

1. 最大7，最小1，建数组 `int b[8];` 所有元素值 初始化为0； 
2. 遍历a，将对应a元素作为 索引，对b数组相应值进行 加1操作。（如：`a[0] = 3`, 则 `b[3] += 1;`) 
3. 顺序遍历数组b，对应元素值为 大于0，输出。 

图示：

```
	   [1] [2] [3] [4] [5] [6] [7]
	1   0   0   1   0   0   0   0
	2   0   0   1   0   1   0   0
	3   0   1   1   0   1   0   0
	4   1   1   1   0   1   0   0
	5   1   1   1   0   1   0   1
```

```c
#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) {
    int a[] = {3, 5, 2, 1, 7};
    int b[8];
    int a_len = sizeof(a)/sizeof(int);
	
    // Initialize the "bucket" array.
    for (int i=0; i<8; i++) {
        b[i] = 0;
    }

    for (int i=0; i<a_len; i++) {
	b[a[i]] = 1;
    }

    // Print original array
    for (int i=0; i<a_len; i++) {
        printf("%6d", a[i]);
    }
    printf("\n");

    // Print result
    for (int i=0; i<8; i++) {
        if (b[i] > 0) {
            printf("%6d", i);
	    }
    }
    printf("\n");
	
    return 0;
}
```

## 冒泡法
## 选择排序
## 快速排序
