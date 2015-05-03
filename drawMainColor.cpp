//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

    //=======================================================================================================================
    glClearColor( 0.05f, 0.075f, 0.25f, 1.0 );
    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
    //----------------------------------------------------------------------------------
    
    //=======================================================================================================================
    #ifdef WIN32
        //-------------------------------------------------------------------------------------------------------               
        glViewport(0, 0, (GLsizei)viewWidth, (GLsizei)viewHeight);
        LoadIdentity(projectionMatrix);
        PerspectiveMatrix(projectionMatrix, fieldOfView, (GLfloat)viewWidth / (GLfloat)viewHeight, adjustNearFar_CAMERA[0],  adjustNearFar_CAMERA[1]);
        //-------------------------------------------------------------------------------------------------------          
    #endif
    //=======================================================================================================================
    
    //=======================================================================================================================
    #ifdef __APPLE__
                            //__THE_+14_CORRECTS_FOR_DIFFERENCE_IN_iOS_vs._WINDOWS 
        //-------------------------------------------------------------------------------------------------------               
        glViewport(0, 0, (GLsizei)viewWidth, (GLsizei)viewHeight);
        LoadIdentity(projectionMatrix);
        PerspectiveMatrix(projectionMatrix, fieldOfView+14, (GLfloat)viewWidth / (GLfloat)viewHeight, adjustNearFar_CAMERA[0],  adjustNearFar_CAMERA[1]);
        //-------------------------------------------------------------------------------------------------------  
        Rotate(projectionMatrix, 0.0, 0.0, 1.0, -90.0);//_____FOR_iOS_LANDSCAPE_VIEW 
        //-------------------------------------------------------------------------------------------------------          
    #endif                  //__THE_+14_CORRECTS_FOR_DIFFERENCE_IN_iOS_vs._WINDOWS 
    //=======================================================================================================



    //=================================================================================
 
    //-------------------   

marcFace_ROTATION[3]   += 1.0;
   armor_ROTATION[3]   += 1.0;
    body_ROTATION[3]   += 1.0;
   
 
    
    //========================================================================= 
    shaderNumber = 11; 
    shaderNumber = 13;     
    #include "_MODEL_FOLDERS_/armor/armor_RENDER.cpp"  
    //========================================================================= 
    shaderNumber = 11; 
    shaderNumber = 14;    
    #include "_MODEL_FOLDERS_/body/body_RENDER.cpp"  
    //=========================================================================   
    shaderNumber = 11; 
    shaderNumber = 15;       
    #include "_MODEL_FOLDERS_/marcFace/marcFace_RENDER.cpp"  


    //========================================================================= 
    //#include "_MODEL_FOLDERS_/room/room_RENDER.cpp"  


    //========================================================================= 
    //#include "_MODEL_FOLDERS_/ball_01/ball_01_RENDER.cpp"  

