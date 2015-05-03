
      //===========================================================================================
      #ifdef __APPLE__
      //--------------
      spriteImage             = [UIImage imageNamed:@"body_DOT3.png"].CGImage ; 
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
              glGenTextures(1, &body_NORMALMAP);  
              glBindTexture(GL_TEXTURE_2D, body_NORMALMAP);   
      ConfigureAndLoadTexture(spriteData,  width, height); 
      if(spriteData != NULL) 
      { 
              free(spriteData); 
      } 

      //-------------------------------------------------------------------------------------------
      spriteImage             = [UIImage imageNamed:@"body.png"].CGImage ; 
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
              glGenTextures(1, &body_COLORMAP);  
              glBindTexture(GL_TEXTURE_2D, body_COLORMAP);   
      ConfigureAndLoadTexture(spriteData,  width, height); 
      if(spriteData != NULL) 
      { 
              free(spriteData); 
      } 

      //-------------------------------------------------------------------------------------------
      spriteImage             = [UIImage imageNamed:@"body_MASK0.png"].CGImage ; 
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
              glGenTextures(1, &body_MASK0MAP);  
              glBindTexture(GL_TEXTURE_2D, body_MASK0MAP);   
      ConfigureAndLoadTexture(spriteData,  width, height); 
      if(spriteData != NULL) 
      { 
              free(spriteData); 
      } 
      //---- 
      #endif 
      //========================================================================================================
      #ifdef WIN32 
      loadTexture("_MODEL_FOLDERS_/body/body_DOT3.png",               body_NORMALMAP); 

      loadTexture("_MODEL_FOLDERS_/body/body.png",                    body_COLORMAP); 
      loadTexture("_MODEL_FOLDERS_/body/body_EXP.png",                body_EXP_MASK); 
      loadTexture("_MODEL_FOLDERS_/body/bodyCracks_EMIT.png",         body_EMIT_MASK);     
      loadTexture("_MODEL_FOLDERS_/body/body_SPEC.png",               body_SPEC_MASK);           
      loadTexture("_MODEL_FOLDERS_/body/body_MIX.png",                body_MIX_MASK);         
      loadTexture("_MODEL_FOLDERS_/body/carbonFiberNormalMask.png",   body_NORMAL_MASK);            

      #endif 
      //------------------------------------------------------------------------------
      #include    "body.cpp" 
      glGenBuffers(1,              &body_VBO);  
      glBindBuffer(GL_ARRAY_BUFFER, body_VBO);  
      glBufferData(GL_ARRAY_BUFFER, sizeof(body), body, GL_STATIC_DRAW);  
      glBindBuffer(GL_ARRAY_BUFFER, 0); 
      //------------------------------------------------------------------------------
      #include    "body_INDICES.cpp"   
      glGenBuffers(1,              &body_INDICES_IBO);  
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, body_INDICES_IBO);   
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(body_INDICES), body_INDICES, GL_STATIC_DRAW);   
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);   
      //========================================================================================================
      body_boundingBox[0] = -0.257905f;   
      body_boundingBox[1] =  0.261122f;  
      body_boundingBox[2] = -0.230397f;   
      body_boundingBox[3] =  0.130280f;  
      body_boundingBox[4] = -0.902533f;   
      body_boundingBox[5] =  0.668704f;  


