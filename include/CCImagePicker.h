//
//  ImagePicker.h
//  CCImagePicker
//
//  Created by w2moon on 13-4-8.
//  Copyright (c) 2013年 w2moon. All rights reserved.
//

#ifndef __CCImagePicker__
#define __CCImagePicker__

//#include "cocos2d.h"
//#include "ExtensionMacros.h"

class CCImagePicker
{
public:
    static bool canUseCamera();
    static bool canUsePhotoLibrary();
    static void useCamera();
    static void usePhotoLibrary();
};

#endif /* defined__CCImagePicker__) */