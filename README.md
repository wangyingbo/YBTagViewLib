# YBTagViewLib

**预览图**

        ![gif图](https://raw.githubusercontent.com/wangyingbo/YBTagViewLib/master/gif.gif)

**使用说明**

> 添加树状分支标签。导入项目；


- 导入项目里的YBTagViewLib文件夹；
- 因为在封装的YBTagViewLib.a静态库里封装的有Category，所以我们需要在Xcode里配置一下；
- 在Xcode的`Build Setting`里的 `Other Linker Flags`添加值`-ObjC`或者`-all_load`，否则的话编译器会报错“找不到分类”。

> 添加有动画的标签。不过不能点击和移动。纯展示；

- 有两种方法，注释掉的和没注释的。
- 注释掉的是用的YBTagView，可以直接调用。没有注释的是用的YBTag，在YBTagView的基础上又封装了一层。



        /**
         *  添加树状标签，不能点击和拖拽
         *  当contentArray的元素个数是1-4个时，tagStyle的取值是0-3；当contentArray的元素个数是5个时，tagStyle的取值范围是0-4。具体参见YBTagStyle.h
         */
        - (void)addBranchTag
        {
            YBTag *tagView = [[YBTag alloc]initSelf];
            [tagView yb_setPoint:CGPointMake(150, 150) contentArray:@[@"耐克",@"耐克air",@"700.00",@"美国"] tagStyle:YBFourTagStyleThreeLeft];
            tagView.isEnableClick = NO;
            [self.imageView addSubview:tagView];
            
            
        //    YBTagView *tagView = [[YBTagView alloc]initShowTagView];
        //    [tagView initWithPoint:CGPointMake(150, 150) array:@[@"耐克",@"耐克air",@"700.00",@"美国"] tagStyle:3];
        //    tagView.isClick = NO;
        //    [self.imageView addSubview:tagView];
        //    tagView.center = CGPointMake(150, 150);
        }

> 添加有动画效果的标签，支持点击变更style和移动位置。
    
    /**
     *  根据触摸位置，返回一个点，根据点来确定标签位置
     */
    - (void)handleTapGestureRecognizer:(UITapGestureRecognizer *)tapGestureRecognizer
    {
    //    YBTag *tagView = [[YBTag alloc]initSelfWithPoint:point];
    //    tagView.isEnableClick = YES;
    //    [self.imageView addSubview:tagView];
    //    tagView.contentArray = @[@"耐克",@"耐克air",@"700.00",@"美国"];
        
        
        CGPoint point = [tapGestureRecognizer locationInView:tapGestureRecognizer.view];
        YBTagView *tagView = [[YBTagView alloc]initWithPoint:point];
        tagView.isClick = YES;
        WS(weakSelf)
        tagView.block = ^(NSString *TagwhichTag,CGPoint centerPoint,NSArray *dataArray){
            SHOW_ALTER(TagwhichTag);
        };
        [self.imageView addSubview:tagView];
        tagView.tagArray = @[@"耐克",@"耐克air",@"700.00",@"美国"];
        
    }


