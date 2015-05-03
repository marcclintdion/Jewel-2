
      //===========================================================================================
      #ifdef __APPLE__
      //--------------
      spriteImage             = [UIImage imageNamed:@"armor_DOT3.png"].CGImage ; 
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
              glGenTextures(1, &armor_NORMALMAP);  
              glBindTexture(GL_TEXTURE_2D, armor_NORMALMAP);   
      ConfigureAndLoadTexture(spriteData,  width, height); 
      if(spriteData != NULL) 
      { 
              free(spriteData); 
      } 

      //-------------------------------------------------------------------------------------------
      spriteImage             = [UIImage imageNamed:@"armor.png"].CGImage ; 
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
              glGenTextures(1, &armor_COLORMAP);  
              glBindTexture(GL_TEXTURE_2D, armor_COLORMAP);   
      ConfigureAndLoadTexture(spriteData,  width, height); 
      if(spriteData != NULL) 
      { 
              free(spriteData); 
      } 

      //-------------------------------------------------------------------------------------------
      spriteImage             = [UIImage imageNamed:@"armor_MASK0.png"].CGImage ; 
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
              glGenTextures(1, &armor_MASK0MAP);  
              glBindTexture(GL_TEXTURE_2D, armor_MASK0MAP);   
      ConfigureAndLoadTexture(spriteData,  width, height); 
      if(spriteData != NULL) 
      { 
              free(spriteData); 
      } 
      //---- 
      #endif 
      //========================================================================================================
      #ifdef WIN32 
      loadTexture("_MODEL_FOLDERS_/armor/armor_DOT3.png",              armor_NORMALMAP); 

      loadTexture("_MODEL_FOLDERS_/armor/armor.png",                   armor_COLORMAP); 
      loadTexture("_MODEL_FOLDERS_/armor/armor_EXP.png",               armor_EXP_MASK); 
      loadTexture("_MODEL_FOLDERS_/armor/armor_EMIT_MASK.png",         armor_EMIT_MASK);     
      loadTexture("_MODEL_FOLDERS_/armor/armor_SPECb.png",             armor_SPEC_MASK);           
      loadTexture("_MODEL_FOLDERS_/armor/armor_MIX.png",               armor_MIX_MASK);         
      loadTexture("_MODEL_FOLDERS_/armor/armor_NORMAL_MASK.png",       armor_NORMAL_MASK);            
       
      #endif 
      //------------------------------------------------------------------------------
      #include    "armor.cpp" 
      glGenBuffers(1,              &armor_VBO);  
      glBindBuffer(GL_ARRAY_BUFFER, armor_VBO);  
      glBufferData(GL_ARRAY_BUFFER, sizeof(armor), armor, GL_STATIC_DRAW);  
      glBindBuffer(GL_ARRAY_BUFFER, 0); 
      //------------------------------------------------------------------------------
      #include    "armor_INDICES.cpp"   
      glGenBuffers(1,              &armor_INDICES_IBO);  
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, armor_INDICES_IBO);   
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(armor_INDICES), armor_INDICES, GL_STATIC_DRAW);   
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);   
      //========================================================================================================
      armor_boundingBox[0] = -0.288108f;   
      armor_boundingBox[1] =  0.288451f;  
      armor_boundingBox[2] = -0.878025f;   
      armor_boundingBox[3] =  0.911395f;  
      armor_boundingBox[4] = -0.140304f;   
      armor_boundingBox[5] =  0.389627f;  


