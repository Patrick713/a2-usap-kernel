cmd_fs/ocfs2/ocfs2_stack_user.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o fs/ocfs2/ocfs2_stack_user.ko fs/ocfs2/ocfs2_stack_user.o fs/ocfs2/ocfs2_stack_user.mod.o;  true
