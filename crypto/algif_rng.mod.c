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
	{ 0x60ba1462, "sock_no_sendpage" },
	{ 0x2478a81f, "sock_no_mmap" },
	{ 0x6c226e27, "sock_no_sendmsg" },
	{ 0xa2d19421, "sock_no_getsockopt" },
	{ 0xf07b6b1c, "sock_no_setsockopt" },
	{ 0xdb30a522, "sock_no_shutdown" },
	{ 0x65923774, "sock_no_listen" },
	{ 0x99ed2265, "sock_no_ioctl" },
	{ 0x873315f7, "sock_no_getname" },
	{ 0xdabddb4d, "sock_no_accept" },
	{ 0x8ea569b7, "sock_no_socketpair" },
	{ 0xcbf0386c, "sock_no_connect" },
	{ 0x26dd6bb9, "sock_no_bind" },
	{ 0x78711902, "af_alg_release" },
	{ 0x80fed4d, "af_alg_unregister_type" },
	{ 0x78a1fff1, "af_alg_register_type" },
	{ 0x58067247, "crypto_alloc_rng" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0x6fd56233, "crypto_rng_reset" },
	{ 0x13ca75d2, "af_alg_release_parent" },
	{ 0xf419d4c0, "sock_kfree_s" },
	{ 0x6ec0b4, "sock_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbb52456b, "_copy_to_iter" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "1A9116B6AA57428816DF37E");
