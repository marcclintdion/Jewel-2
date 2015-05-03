
      //===========================================================================================
      #ifdef __APPLE__
      //--------------
      spriteImage             = [UIImage imageNamed:@"face_DOT3.png"].CGImage ; 
      width                   =  CGImageGetWidth(spriteImage); 
      height                  =  CGImageGetHeight(spriteImage);  
      spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));  
      spriteContext           =  CGBitmapContextCreate(spriteData, width, height, 8, width * 4, CGImageGetColorSpace(spriteImage), kCGImageAlphaNoneSkipLast);  
      CGContextSetBlendMode(spriteContext, kCGBlendModeCopy); 
      CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS 
      CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS 
      CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);  
      CGContextRelease(spriteContext); 
      //--------- 
              glGenTextures(1, &face_NORMALMAP);  
              glBindTexture(GL_TEXTURE_2D, face_NORMALMAP);   
      ConfigureAndLoadTexture(spriteData,  width, height); 
      if(spriteData != NULL) 
      { 
              free(spriteData); 
      } 

      //-------------------------------------------------------------------------------------------
      spriteImage             = [UIImage imageNamed:@"face.png"].CGImage ; 
      width                   =  CGImageGetWidth(spriteImage); 
      height                  =  CGImageGetHeight(spriteImage);  
      spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));  
      spriteContext           =  CGBitmapContextCreate(spriteData, width, height, 8, width * 4, CGImageGetColorSpace(spriteImage), kCGImageAlphaNoneSkipLast);  
      CGContextSetBlendMode(spriteContext, kCGBlendModeCopy); 
      CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS 
      CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS 
      CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);  
      CGContextRelease(spriteContext); 
      //--------- 
              glGenTextures(1, &face_COLORMAP);  
              glBindTexture(GL_TEXTURE_2D, face_COLORMAP);   
      ConfigureAndLoadTexture(spriteData,  width, height); 
      if(spriteData != NULL) 
      { 
              free(spriteData); 
      } 

      //-------------------------------------------------------------------------------------------
      spriteImage             = [UIImage imageNamed:@"face_MASK0.png"].CGImage ; 
      width                   =  CGImageGetWidth(spriteImage); 
      height                  =  CGImageGetHeight(spriteImage);  
      spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));  
      spriteContext           =  CGBitmapContextCreate(spriteData, width, height, 8, width * 4, CGImageGetColorSpace(spriteImage), kCGImageAlphaNoneSkipLast);  
      CGContextSetBlendMode(spriteContext, kCGBlendModeCopy); 
      CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS 
      CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS 
      CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);  
      CGContextRelease(spriteContext); 
      //--------- 
              glGenTextures(1, &face_MASK0MAP);  
              glBindTexture(GL_TEXTURE_2D, face_MASK0MAP);   
      ConfigureAndLoadTexture(spriteData,  width, height); 
      if(spriteData != NULL) 
      { 
              free(spriteData); 
      } 
      //---- 
      #endif 
      //========================================================================================================
      #ifdef WIN32 
      loadTexture("_MODEL_FOLDERS_/marcFace/face_DOT3.png",           marcFace_NORMALMAP); 

      loadTexture("_MODEL_FOLDERS_/marcFace/face.png",                marcFace_COLORMAP); 
      loadTexture("_MODEL_FOLDERS_/marcFace/faceMASK0.png",           marcFace_MASK0MAP); 
      #endif 
      //------------------------------------------------------------------------------
      #include    "marcFace.cpp" 
      glGenBuffers(1,              &marcFace_VBO);  
      glBindBuffer(GL_ARRAY_BUFFER, marcFace_VBO);  
      glBufferData(GL_ARRAY_BUFFER, sizeof(marcFace), marcFace, GL_STATIC_DRAW);  
      glBindBuffer(GL_ARRAY_BUFFER, 0); 
      //------------------------------------------------------------------------------
      #include    "marcFace_INDICES.cpp"   
      glGenBuffers(1,              &marcFace_INDICES_IBO);  
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, marcFace_INDICES_IBO);   
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(marcFace_INDICES), marcFace_INDICES, GL_STATIC_DRAW);   
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);   
      //========================================================================================================
      marcFace_boundingBox[0] = -0.074420f;   
      marcFace_boundingBox[1] =  0.067406f;  
      marcFace_boundingBox[2] = -0.179831f;   
      marcFace_boundingBox[3] =  0.014383f;  
      marcFace_boundingBox[4] = 0.000000f;   
      marcFace_boundingBox[5] =  0.789571f;  


