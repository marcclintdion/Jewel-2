setupTransforms_MainColor();
    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, marcFace_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, marcFace_INDICES_IBO);  
    //--------------------------------
    LoadIdentity(modelWorldMatrix); 
    //--------------------------------------------------------
    Translate(modelWorldMatrix, marcFace_POSITION[0],
                                marcFace_POSITION[1], 
                                marcFace_POSITION[2]); 
    //--------------------------------------------------------
    Rotate(modelWorldMatrix,    marcFace_ROTATION[0],
                                marcFace_ROTATION[1], 
                                marcFace_ROTATION[2], 
                                marcFace_ROTATION[3]); 
    //--------------------------------------------------------
    LoadIdentity(modelRotationMatrix); 
    //--------------------------------------------------------
    Rotate(modelRotationMatrix,    marcFace_ROTATION[0],
                                   marcFace_ROTATION[1], 
                                   marcFace_ROTATION[2], 
                                   marcFace_ROTATION[3]); 
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, marcFace_NORMALMAP); 
    //------------  
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, m_uiShadowMapTexture); 
    //------------  
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, marcFace_COLORMAP); 
    //--------------  
    glActiveTexture (GL_TEXTURE3);  
    glBindTexture(GL_TEXTURE_2D, marcFace_MASK0MAP); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, 3159, GL_UNSIGNED_INT, 0); 
