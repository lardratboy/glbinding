
#include "Meta_Maps.h"

#include <glesbinding/Version.h>


using namespace gles;


namespace glesbinding
{


// all functions directly required by features, not indirectly via extensions

const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion =
{
    { { 2, 0 }, { "glActiveTexture", "glAttachShader", "glBindAttribLocation", "glBindBuffer", "glBindFramebuffer", "glBindRenderbuffer", "glBindTexture", "glBlendColor", "glBlendEquation", "glBlendEquationSeparate", "glBlendFunc", "glBlendFuncSeparate", "glBufferData", "glBufferSubData", "glCheckFramebufferStatus", "glClear", "glClearColor", "glClearDepthf", "glClearStencil", "glColorMask", "glCompileShader", "glCompressedTexImage2D", "glCompressedTexSubImage2D", "glCopyTexImage2D", "glCopyTexSubImage2D", "glCreateProgram", "glCreateShader", "glCullFace", "glDeleteBuffers", "glDeleteFramebuffers", "glDeleteProgram", "glDeleteRenderbuffers", "glDeleteShader", "glDeleteTextures", "glDepthFunc", "glDepthMask", "glDepthRangef", "glDetachShader", "glDisable", "glDisableVertexAttribArray", "glDrawArrays", "glDrawElements", "glEnable", "glEnableVertexAttribArray", "glFinish", "glFlush", "glFramebufferRenderbuffer", "glFramebufferTexture2D", "glFrontFace", "glGenBuffers", "glGenFramebuffers", "glGenRenderbuffers", "glGenTextures", "glGenerateMipmap", "glGetActiveAttrib", "glGetActiveUniform", "glGetAttachedShaders", "glGetAttribLocation", "glGetBooleanv", "glGetBufferParameteriv", "glGetError", "glGetFloatv", "glGetFramebufferAttachmentParameteriv", "glGetIntegerv", "glGetProgramInfoLog", "glGetProgramiv", "glGetRenderbufferParameteriv", "glGetShaderInfoLog", "glGetShaderPrecisionFormat", "glGetShaderSource", "glGetShaderiv", "glGetString", "glGetTexParameterfv", "glGetTexParameteriv", "glGetUniformLocation", "glGetUniformfv", "glGetUniformiv", "glGetVertexAttribPointerv", "glGetVertexAttribfv", "glGetVertexAttribiv", "glHint", "glIsBuffer", "glIsEnabled", "glIsFramebuffer", "glIsProgram", "glIsRenderbuffer", "glIsShader", "glIsTexture", "glLineWidth", "glLinkProgram", "glPixelStorei", "glPolygonOffset", "glReadPixels", "glReleaseShaderCompiler", "glRenderbufferStorage", "glSampleCoverage", "glScissor", "glShaderBinary", "glShaderSource", "glStencilFunc", "glStencilFuncSeparate", "glStencilMask", "glStencilMaskSeparate", "glStencilOp", "glStencilOpSeparate", "glTexImage2D", "glTexParameterf", "glTexParameterfv", "glTexParameteri", "glTexParameteriv", "glTexSubImage2D", "glUniform1f", "glUniform1fv", "glUniform1i", "glUniform1iv", "glUniform2f", "glUniform2fv", "glUniform2i", "glUniform2iv", "glUniform3f", "glUniform3fv", "glUniform3i", "glUniform3iv", "glUniform4f", "glUniform4fv", "glUniform4i", "glUniform4iv", "glUniformMatrix2fv", "glUniformMatrix3fv", "glUniformMatrix4fv", "glUseProgram", "glValidateProgram", "glVertexAttrib1f", "glVertexAttrib1fv", "glVertexAttrib2f", "glVertexAttrib2fv", "glVertexAttrib3f", "glVertexAttrib3fv", "glVertexAttrib4f", "glVertexAttrib4fv", "glVertexAttribPointer", "glViewport" } },
    { { 3, 0 }, { "glBeginQuery", "glBeginTransformFeedback", "glBindBufferBase", "glBindBufferRange", "glBindSampler", "glBindTransformFeedback", "glBindVertexArray", "glBlitFramebuffer", "glClearBufferfi", "glClearBufferfv", "glClearBufferiv", "glClearBufferuiv", "glClientWaitSync", "glCompressedTexImage3D", "glCompressedTexSubImage3D", "glCopyBufferSubData", "glCopyTexSubImage3D", "glDeleteQueries", "glDeleteSamplers", "glDeleteSync", "glDeleteTransformFeedbacks", "glDeleteVertexArrays", "glDrawArraysInstanced", "glDrawBuffers", "glDrawElementsInstanced", "glDrawRangeElements", "glEndQuery", "glEndTransformFeedback", "glFenceSync", "glFlushMappedBufferRange", "glFramebufferTextureLayer", "glGenQueries", "glGenSamplers", "glGenTransformFeedbacks", "glGenVertexArrays", "glGetActiveUniformBlockName", "glGetActiveUniformBlockiv", "glGetActiveUniformsiv", "glGetBufferParameteri64v", "glGetBufferPointerv", "glGetFragDataLocation", "glGetInteger64i_v", "glGetInteger64v", "glGetIntegeri_v", "glGetInternalformativ", "glGetProgramBinary", "glGetQueryObjectuiv", "glGetQueryiv", "glGetSamplerParameterfv", "glGetSamplerParameteriv", "glGetStringi", "glGetSynciv", "glGetTransformFeedbackVarying", "glGetUniformBlockIndex", "glGetUniformIndices", "glGetUniformuiv", "glGetVertexAttribIiv", "glGetVertexAttribIuiv", "glInvalidateFramebuffer", "glInvalidateSubFramebuffer", "glIsQuery", "glIsSampler", "glIsSync", "glIsTransformFeedback", "glIsVertexArray", "glMapBufferRange", "glPauseTransformFeedback", "glProgramBinary", "glProgramParameteri", "glReadBuffer", "glRenderbufferStorageMultisample", "glResumeTransformFeedback", "glSamplerParameterf", "glSamplerParameterfv", "glSamplerParameteri", "glSamplerParameteriv", "glTexImage3D", "glTexStorage2D", "glTexStorage3D", "glTexSubImage3D", "glTransformFeedbackVaryings", "glUniform1ui", "glUniform1uiv", "glUniform2ui", "glUniform2uiv", "glUniform3ui", "glUniform3uiv", "glUniform4ui", "glUniform4uiv", "glUniformBlockBinding", "glUniformMatrix2x3fv", "glUniformMatrix2x4fv", "glUniformMatrix3x2fv", "glUniformMatrix3x4fv", "glUniformMatrix4x2fv", "glUniformMatrix4x3fv", "glUnmapBuffer", "glVertexAttribDivisor", "glVertexAttribI4i", "glVertexAttribI4iv", "glVertexAttribI4ui", "glVertexAttribI4uiv", "glVertexAttribIPointer", "glWaitSync" } },
    { { 3, 1 }, { "glActiveShaderProgram", "glBindImageTexture", "glBindProgramPipeline", "glBindVertexBuffer", "glCreateShaderProgramv", "glDeleteProgramPipelines", "glDispatchCompute", "glDispatchComputeIndirect", "glDrawArraysIndirect", "glDrawElementsIndirect", "glFramebufferParameteri", "glGenProgramPipelines", "glGetBooleani_v", "glGetFramebufferParameteriv", "glGetMultisamplefv", "glGetProgramInterfaceiv", "glGetProgramPipelineInfoLog", "glGetProgramPipelineiv", "glGetProgramResourceIndex", "glGetProgramResourceLocation", "glGetProgramResourceName", "glGetProgramResourceiv", "glGetTexLevelParameterfv", "glGetTexLevelParameteriv", "glIsProgramPipeline", "glMemoryBarrier", "glMemoryBarrierByRegion", "glProgramUniform1f", "glProgramUniform1fv", "glProgramUniform1i", "glProgramUniform1iv", "glProgramUniform1ui", "glProgramUniform1uiv", "glProgramUniform2f", "glProgramUniform2fv", "glProgramUniform2i", "glProgramUniform2iv", "glProgramUniform2ui", "glProgramUniform2uiv", "glProgramUniform3f", "glProgramUniform3fv", "glProgramUniform3i", "glProgramUniform3iv", "glProgramUniform3ui", "glProgramUniform3uiv", "glProgramUniform4f", "glProgramUniform4fv", "glProgramUniform4i", "glProgramUniform4iv", "glProgramUniform4ui", "glProgramUniform4uiv", "glProgramUniformMatrix2fv", "glProgramUniformMatrix2x3fv", "glProgramUniformMatrix2x4fv", "glProgramUniformMatrix3fv", "glProgramUniformMatrix3x2fv", "glProgramUniformMatrix3x4fv", "glProgramUniformMatrix4fv", "glProgramUniformMatrix4x2fv", "glProgramUniformMatrix4x3fv", "glSampleMaski", "glTexStorage2DMultisample", "glUseProgramStages", "glValidateProgramPipeline", "glVertexAttribBinding", "glVertexAttribFormat", "glVertexAttribIFormat", "glVertexBindingDivisor" } },
    { { 3, 2 }, { "glBlendBarrier", "glBlendEquationSeparatei", "glBlendEquationi", "glBlendFuncSeparatei", "glBlendFunci", "glColorMaski", "glCopyImageSubData", "glDebugMessageCallback", "glDebugMessageControl", "glDebugMessageInsert", "glDisablei", "glDrawElementsBaseVertex", "glDrawElementsInstancedBaseVertex", "glDrawRangeElementsBaseVertex", "glEnablei", "glFramebufferTexture", "glGetDebugMessageLog", "glGetGraphicsResetStatus", "glGetObjectLabel", "glGetObjectPtrLabel", "glGetPointerv", "glGetSamplerParameterIiv", "glGetSamplerParameterIuiv", "glGetTexParameterIiv", "glGetTexParameterIuiv", "glGetnUniformfv", "glGetnUniformiv", "glGetnUniformuiv", "glIsEnabledi", "glMinSampleShading", "glObjectLabel", "glObjectPtrLabel", "glPatchParameteri", "glPopDebugGroup", "glPrimitiveBoundingBox", "glPushDebugGroup", "glReadnPixels", "glSamplerParameterIiv", "glSamplerParameterIuiv", "glTexBuffer", "glTexBufferRange", "glTexParameterIiv", "glTexParameterIuiv", "glTexStorage3DMultisample" } }
};


} // namespace glesbinding