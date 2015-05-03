    if(marcFace_NORMALMAP != 0) 
    { 
        glDeleteTextures(1, &marcFace_NORMALMAP); 
        marcFace_NORMALMAP = 0; 
    } 
    if(marcFace_COLORMAP  != 0)
    { 
        glDeleteTextures(1, &marcFace_COLORMAP); 
        marcFace_COLORMAP  = 0; 
    } 
    if(marcFace_MASK0MAP  != 0)
    { 
        glDeleteTextures(1, &marcFace_MASK0MAP); 
        marcFace_MASK0MAP  = 0; 
    } 
    //-------------------------------------------------- 
    if(marcFace_VBO  != 0) 
    { 
        glDeleteBuffers(1, &marcFace_VBO); 
        marcFace_VBO  = 0; 
    } 
    if(marcFace_INDICES_IBO  != 0) 
    { 
        glDeleteBuffers(1, &marcFace_INDICES_IBO); 
        marcFace_INDICES_IBO  = 0; 
    } 
