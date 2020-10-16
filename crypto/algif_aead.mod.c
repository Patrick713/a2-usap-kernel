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
	{ 0x2478a81f, "sock_no_mmap" },
	{ 0xa2d19421, "sock_no_getsockopt" },
	{ 0xf07b6b1c, "sock_no_setsockopt" },
	{ 0xdb30a522, "sock_no_shutdown" },
	{ 0x65923774, "sock_no_listen" },
	{ 0x99ed2265, "sock_no_ioctl" },
	{ 0x14ff7a05, "af_alg_poll" },
	{ 0x873315f7, "sock_no_getname" },
	{ 0xdabddb4d, "sock_no_accept" },
	{ 0x8ea569b7, "sock_no_socketpair" },
	{ 0xcbf0386c, "sock_no_connect" },
	{ 0x26dd6bb9, "sock_no_bind" },
	{ 0x78711902, "af_alg_release" },
	{ 0x80fed4d, "af_alg_unregister_type" },
	{ 0x78a1fff1, "af_alg_register_type" },
	{ 0xecd247a4, "sk_free" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x2e859034, "crypto_aead_decrypt" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x49d89cc7, "crypto_aead_encrypt" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x7498ae87, "af_alg_count_tsgl" },
	{ 0x5cb0d17d, "af_alg_wait_for_data" },
	{ 0xd5a9607a, "af_alg_wmem_wakeup" },
	{ 0xd3313a2f, "af_alg_free_resources" },
	{ 0x4f5ecca8, "af_alg_get_rsgl" },
	{ 0x611ad459, "af_alg_alloc_areq" },
	{ 0x4e9fa0be, "af_alg_async_cb" },
	{ 0xe7446dc3, "crypto_req_done" },
	{ 0x536ca19c, "crypto_get_default_null_skcipher" },
	{ 0x4d4ce517, "crypto_alloc_aead" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0x8b2bc06d, "crypto_aead_setkey" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x6ec0b4, "sock_kmalloc" },
	{ 0x13ca75d2, "af_alg_release_parent" },
	{ 0xf419d4c0, "sock_kfree_s" },
	{ 0x75e1f109, "sock_kzfree_s" },
	{ 0xcc0162c1, "af_alg_pull_tsgl" },
	{ 0xe82bfbf1, "crypto_aead_setauthsize" },
	{ 0xae48913c, "af_alg_sendmsg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa36ae624, "crypto_skcipher_encrypt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdd9419f2, "af_alg_sendpage" },
	{ 0xb76b5caa, "release_sock" },
	{ 0xdcb92140, "lock_sock_nested" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "02540644328C27A95B4D571");
