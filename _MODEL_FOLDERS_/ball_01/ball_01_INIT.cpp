
      //===========================================================================================
      #ifdef __APPLE__
      //--------------
      spriteImage             = [UIImage imageNamed:@"ball_01_DOT3.png"].CGImage ; 
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
              glGenTextures(1, &ball_01_NORMALMAP);  
              glBindTexture(GL_TEXTURE_2D, ball_01_NORMALMAP);   
      ConfigureAndLoadTexture(spriteData,  width, height); 
      if(spriteData != NULL) 
      { 
              free(spriteData); 
      } 

      //-------------------------------------------------------------------------------------------
      spriteImage             = [UIImage imageNamed:@"ball_01.png"].CGImage ; 
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
              glGenTextures(1, &ball_01_COLORMAP);  
              glBindTexture(GL_TEXTURE_2D, ball_01_COLORMAP);   
      ConfigureAndLoadTexture(spriteData,  width, height); 
      if(spriteData != NULL) 
      { 
              free(spriteData); 
      } 

      //-------------------------------------------------------------------------------------------
      spriteImage             = [UIImage imageNamed:@"ball_01_MASK0.png"].CGImage ; 
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
              glGenTextures(1, &ball_01_MASK0MAP);  
              glBindTexture(GL_TEXTURE_2D, ball_01_MASK0MAP);   
      ConfigureAndLoadTexture(spriteData,  width, height); 
      if(spriteData != NULL) 
      { 
              free(spriteData); 
      } 
      //---- 
      #endif 
      //========================================================================================================
      #ifdef WIN32 
      loadTexture("_MODEL_FOLDERS_/ball_01/ball_01_DOT3.png",           ball_01_NORMALMAP); 

      loadTexture("_MODEL_FOLDERS_/ball_01/ball_01.png",                ball_01_COLORMAP); 
      loadTexture("_MODEL_FOLDERS_/ball_01/ball_01MASK0.png",           ball_01_MASK0MAP); 
      #endif 
      //------------------------------------------------------------------------------
      #include    "ball_01.cpp" 
      glGenBuffers(1,              &ball_01_VBO);  
      glBindBuffer(GL_ARRAY_BUFFER, ball_01_VBO);  
      glBufferData(GL_ARRAY_BUFFER, sizeof(ball_01), ball_01, GL_STATIC_DRAW);  
      glBindBuffer(GL_ARRAY_BUFFER, 0); 
      //------------------------------------------------------------------------------
      #include    "ball_01_INDICES.cpp"   
      glGenBuffers(1,              &ball_01_INDICES_IBO);  
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ball_01_INDICES_IBO);   
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(ball_01_INDICES), ball_01_INDICES, GL_STATIC_DRAW);   
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);   
      //========================================================================================================
      ball_01_boundingBox[0] = -0.194696f;   
      ball_01_boundingBox[1] =  0.194696f;  
      ball_01_boundingBox[2] = -0.194696f;   
      ball_01_boundingBox[3] =  0.194696f;  
      ball_01_boundingBox[4] = -0.194696f;   
      ball_01_boundingBox[5] =  0.194696f;  


