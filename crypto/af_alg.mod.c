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
	{ 0xb76b5caa, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x92849d17, "sock_init_data" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xa7b3181c, "up_read" },
	{ 0x76d11765, "mem_map" },
	{ 0xa2d19421, "sock_no_getsockopt" },
	{ 0x99ed2265, "sock_no_ioctl" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x873315f7, "sock_no_getname" },
	{ 0xfffa3100, "sg_next" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb1d7438, "down_read" },
	{ 0x60ba1462, "sock_no_sendpage" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0x2478a81f, "sock_no_mmap" },
	{ 0x7291521b, "sock_no_recvmsg" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ea569b7, "sock_no_socketpair" },
	{ 0x27073f33, "sk_alloc" },
	{ 0xc5850110, "printk" },
	{ 0xdcb92140, "lock_sock_nested" },
	{ 0xe0ca0cb7, "iov_iter_get_pages" },
	{ 0x65923774, "sock_no_listen" },
	{ 0x941ffd9c, "sock_wake_async" },
	{ 0xecd247a4, "sk_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0xf419d4c0, "sock_kfree_s" },
	{ 0xdb30a522, "sock_no_shutdown" },
	{ 0x12b548f6, "module_put" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x9b499d92, "__wake_up_sync_key" },
	{ 0x9adc4641, "proto_register" },
	{ 0xda2a4834, "__free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb28dc78c, "sock_register" },
	{ 0x7c4749d7, "proto_unregister" },
	{ 0xe16c6b8b, "_copy_from_iter_full" },
	{ 0x6ec0b4, "sock_kmalloc" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xcbf0386c, "sock_no_connect" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x6c226e27, "sock_no_sendmsg" },
	{ 0x75e1f109, "sock_kzfree_s" },
	{ 0x6dc4b3cd, "iov_iter_advance" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xcc286e8e, "__put_page" },
	{ 0x717bcdac, "try_module_get" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D3E82012C8CBAA95B21A937");
