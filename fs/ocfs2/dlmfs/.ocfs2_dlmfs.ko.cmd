cmd_fs/ocfs2/dlmfs/ocfs2_dlmfs.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o fs/ocfs2/dlmfs/ocfs2_dlmfs.ko fs/ocfs2/dlmfs/ocfs2_dlmfs.o fs/ocfs2/dlmfs/ocfs2_dlmfs.mod.o;  true