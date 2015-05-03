setupTransforms_MainColor();
    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, ball_01_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ball_01_INDICES_IBO);  
    //--------------------------------
    LoadIdentity(modelWorldMatrix); 
    //--------------------------------------------------------
    Translate(modelWorldMatrix, ball_01_POSITION[0],
                                ball_01_POSITION[1], 
                                ball_01_POSITION[2]); 
    //--------------------------------------------------------
    Rotate(modelWorldMatrix,    ball_01_ROTATION[0],
                                ball_01_ROTATION[1], 
                                ball_01_ROTATION[2], 
                                ball_01_ROTATION[3]); 
    //--------------------------------------------------------
    LoadIdentity(modelRotationMatrix); 
    //--------------------------------------------------------
    Rotate(modelRotationMatrix,    ball_01_ROTATION[0],
                                   ball_01_ROTATION[1], 
                                   ball_01_ROTATION[2], 
                                   ball_01_ROTATION[3]); 
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, ball_01_NORMALMAP); 
    //------------  
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, m_uiShadowMapTexture); 
    //------------  
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, ball_01_COLORMAP); 
    //--------------  
    glActiveTexture (GL_TEXTURE3);  
    glBindTexture(GL_TEXTURE_2D, ball_01_MASK0MAP); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, 2304, GL_UNSIGNED_INT, 0); 
