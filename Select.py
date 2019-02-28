#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Author  : xiaoke


def select_sort(alist):
    """选择排序"""
    n = len(alist)
    # 外层循环控制循环次数
    for j in range(0, n - 1):
        # 假设找到的最小元素下标为j
        min_index = j
        # 寻找最小元素的过程
        for i in range(j + 1, n):
            # 假设最小下标的值，大于循环中一个元素，那么就改变最小值的下标
            if alist[min_index] > alist[i]:
                min_index = i
        # 为了容错处理，因为循环一开始就假设把最小值的下标j赋值给变量min_index
        if j != min_index:
            # 在不停的循环中，不停的交换两个不一样大小的值
            alist[min_index], alist[j] = alist[j], alist[min_index]


if __name__ == '__main__':
    alist = [54, 26, 93, 17, 77, 31, 44, 55, 20]
    print("原列表为：%s" % alist)
    select_sort(alist)
    print("新列表为：%s" % alist)

# 结果如下：
# 原列表为：[54, 26, 93, 17, 77, 31, 44, 55, 20]
# 新列表为：[17, 20, 26, 31, 44, 54, 55, 77, 93]
