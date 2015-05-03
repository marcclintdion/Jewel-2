    if(ball_01_NORMALMAP != 0) 
    { 
        glDeleteTextures(1, &ball_01_NORMALMAP); 
        ball_01_NORMALMAP = 0; 
    } 
    if(ball_01_COLORMAP  != 0)
    { 
        glDeleteTextures(1, &ball_01_COLORMAP); 
        ball_01_COLORMAP  = 0; 
    } 
    if(ball_01_MASK0MAP  != 0)
    { 
        glDeleteTextures(1, &ball_01_MASK0MAP); 
        ball_01_MASK0MAP  = 0; 
    } 
    //-------------------------------------------------- 
    if(ball_01_VBO  != 0) 
    { 
        glDeleteBuffers(1, &ball_01_VBO); 
        ball_01_VBO  = 0; 
    } 
    if(ball_01_INDICES_IBO  != 0) 
    { 
        glDeleteBuffers(1, &ball_01_INDICES_IBO); 
        ball_01_INDICES_IBO  = 0; 
    } 
