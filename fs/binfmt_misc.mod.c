#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0xd8be439f, "kill_litter_super" },
	{ 0x36ac7fd0, "noop_llseek" },
	{ 0x83673cbf, "default_llseek" },
	{ 0x24d8114c, "simple_statfs" },
	{ 0x6b4caa76, "unregister_filesystem" },
	{ 0xd17da0b4, "unregister_binfmt" },
	{ 0x48559655, "__register_binfmt" },
	{ 0xf3d8ce69, "register_filesystem" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x68a5ef6, "kernel_read" },
	{ 0x8d2ea2c9, "search_binary_handler" },
	{ 0xb454cc7f, "prepare_binprm" },
	{ 0xc9e19b7a, "would_dump" },
	{ 0x2fe5449c, "fd_install" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xa167a5a3, "remove_arg_zero" },
	{ 0x8148d2f8, "__close_fd" },
	{ 0x74645779, "dentry_open" },
	{ 0x43ab39ed, "bprm_change_interp" },
	{ 0xa4ab30ea, "copy_strings_kernel" },
	{ 0xa92173df, "fput" },
	{ 0x9f984513, "strrchr" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x53b64c77, "d_instantiate" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0x5142ab5, "simple_pin_fs" },
	{ 0x9812880e, "current_time" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x800805e5, "new_inode" },
	{ 0x70d99e61, "iput" },
	{ 0xc5850110, "printk" },
	{ 0x97a2a3b6, "open_exec" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x48421502, "lookup_one_len" },
	{ 0x4253aa7e, "down_write" },
	{ 0xc8339e24, "string_unescape" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x349cba85, "strchr" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x5f754e5a, "memset" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x97255bdf, "strlen" },
	{ 0xdc1a78c, "bin2hex" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x2141360d, "simple_release_fs" },
	{ 0x5117deaf, "dput" },
	{ 0xda9b13ba, "d_drop" },
	{ 0x7062fd9e, "drop_nlink" },
	{ 0x9425caca, "_raw_write_lock" },
	{ 0xace48982, "filp_close" },
	{ 0x37a0cba, "kfree" },
	{ 0x68a6116f, "clear_inode" },
	{ 0x4392cfd8, "simple_fill_super" },
	{ 0x4b954b51, "get_tree_single" },
	{ 0x11089ac7, "_ctype" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "71E5CB875E3366B522B573D");
